#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>
using namespace std;

int countPunctuation(const string& sentence);

int main() {

    string essay;
    getline(cin, essay);

    vector<string> sentences;
    stringstream ss(essay);
    string sentence;

    while (getline(ss, sentence, '|')) {
        if (!sentence.empty()) {
            sentences.push_back(sentence);
        }
    }

    vector<int> punctuationCounts;
    vector<int> groupedSentences;

    for (const string& curr : sentences) {
        int punctuationCount = countPunctuation(curr);

        auto it = find(punctuationCounts.begin(), punctuationCounts.end(), punctuationCount);

        if (it != punctuationCounts.end()) {
            int index = distance(punctuationCounts.begin(), it);
            groupedSentences[index]++;
        } else {
            punctuationCounts.push_back(punctuationCount);
            groupedSentences.push_back(1);
        }
    }

    for (size_t i = 0; i < punctuationCounts.size(); i++) {
        for (size_t j = i + 1; j < punctuationCounts.size(); j++) {
            if (punctuationCounts[i] > punctuationCounts[j]) {
                swap(punctuationCounts[i], punctuationCounts[j]);
                swap(groupedSentences[i], groupedSentences[j]);
            }
        }
    }

    for (size_t i = 0; i < punctuationCounts.size(); i++) {
        cout << punctuationCounts[i] << " symbol sentences: " << groupedSentences[i] << endl;
    }

    return 0;
}

int countPunctuation(const string& sentence) {
    int count = 0;
    for (char c : sentence) {
        if (ispunct(c) && c != '|') {
            count++;
        }
    }
    return count;
}
