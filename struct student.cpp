void print(const vector<Student>& student_list) {
    for (unsigned long int i = 0; i < student_list.size(); i++) {
        cout << student_list[i].id << " " << student_list[i].name << " " << student_list[i].gpa << endl;
    }
}
int find(const vector<Student>& student_list, string id) {
    for (unsigned long int i = 0; i < student_list.size(); i++) {
        if (student_list[i].id == id) {
            return i;
        }
    }
    return -1;
}
vector<Student> top3(const vector<Student>& student_list) {
    // S? d?ng vector result �? l�u tr? danh s�ch sinh vi�n c� gpa cao nh?t
    vector<Student> result;
    // S?p x?p danh s�ch sinh vi�n theo th? t? gi?m d?n c?a gpa
    vector<Student> sorted_list = student_list;
    sort(sorted_list.begin(), sorted_list.end(), [](const Student& a, const Student& b) {
        return a.gpa > b.gpa;
    });
    // L?y t?i �a 3 sinh vi�n �?u ti�n trong danh s�ch �? s?p x?p
    for (int i = 0; i < min((int)sorted_list.size(), 3); i++) {
        result.push_back(sorted_list[i]);
    }
    return result;
}

