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
    // S? d?ng vector result ð? lýu tr? danh sách sinh viên có gpa cao nh?t
    vector<Student> result;
    // S?p x?p danh sách sinh viên theo th? t? gi?m d?n c?a gpa
    vector<Student> sorted_list = student_list;
    sort(sorted_list.begin(), sorted_list.end(), [](const Student& a, const Student& b) {
        return a.gpa > b.gpa;
    });
    // L?y t?i ða 3 sinh viên ð?u tiên trong danh sách ð? s?p x?p
    for (int i = 0; i < min((int)sorted_list.size(), 3); i++) {
        result.push_back(sorted_list[i]);
    }
    return result;
}

