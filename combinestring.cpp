// khai b�o h�m
string combineWordsFromFile(const char fileName[]) {
  // t?o bi?n string s
  string s = "";
  // t?o bi?n ifstream file
  ifstream file(fileName);
  // ki?m tra file c� m? ��?c kh�ng
  if (!file) {
    return "";
  }
  // t?o vector<string> words
  vector<string> words;
  // d�ng v?ng l?p while �? �?c t?ng t? trong file
  string word;
  while (file >> word) {
    words.push_back(word);
  }
  // ��ng file
  file.close();
  // d�ng std::sort() �? s?p x?p vector words
  std::sort(words.begin(), words.end(), std::greater<string>());
  // d�ng v?ng l?p for �? n?i c�c t? v�o bi?n string s
  for (long unsigned int i = 0; i < words.size(); i++) {
    s += words[i];
    if (i < words.size() -1) {
      s += " ";
    }
    
   }
   // tr? v? bi?n string s
   return s;
}
