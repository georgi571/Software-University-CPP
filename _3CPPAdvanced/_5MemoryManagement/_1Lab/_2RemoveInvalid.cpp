#include <iostream>
#include <cmath>
#include <sstream>
#include <cstring>
#include <vector>
using namespace std;

void * readCompany(istream & in);

bool isValidId(void * company);

void printCompany(void * company);

int main() {
    vector<void *> data;

    while (true) {
        void * newCompany = readCompany(cin);

        if (newCompany == nullptr) {
            break;
        }

        data.push_back(newCompany);
    }

    for (void * company : data) {
        if (isValidId(company)) {
            printCompany(company);
        }
    }

    for (void * company : data) {
        delete [] static_cast<char *>(company);
    }
    data.clear();

    return 0;
}

void * readCompany(istream & in) {
    string number, name;

    cin >> number;
    if (number == "end") {
        return nullptr;
    }
    int id = stol(number);

    cin >> name;

    char * company = new char[sizeof(int) + name.length() + 1];

    int * companyId = reinterpret_cast<int *>(company);
    *companyId = id;

    strcpy(company + sizeof(int), name.c_str());

    return company;
}

bool isValidId(void * company) {
    int * id = static_cast<int *>(company);

    return *id >= 0;
}

void printCompany(void * company) {
    int * id = static_cast<int *>(company);
    const char * name = reinterpret_cast<const char *>(id + 1);
    cout << *id << " " << name << endl;
}