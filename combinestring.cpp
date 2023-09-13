// khai báo hàm
string combineWordsFromFile(const char fileName[]) {
  // t?o bi?n string s
  string s = "";
  // t?o bi?n ifstream file
  ifstream file(fileName);
  // ki?m tra file có m? ðý?c không
  if (!file) {
    return "";
  }
  // t?o vector<string> words
  vector<string> words;
  // dùng v?ng l?p while ð? ð?c t?ng t? trong file
  string word;
  while (file >> word) {
    words.push_back(word);
  }
  // ðóng file
  file.close();
  // dùng std::sort() ð? s?p x?p vector words
  std::sort(words.begin(), words.end(), std::greater<string>());
  // dùng v?ng l?p for ð? n?i các t? vào bi?n string s
  for (long unsigned int i = 0; i < words.size(); i++) {
    s += words[i];
    if (i < words.size() -1) {
      s += " ";
    }
    
   }
   // tr? v? bi?n string s
   return s;
}
