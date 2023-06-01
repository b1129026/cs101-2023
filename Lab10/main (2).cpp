#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class mystring {
    private:
    string m_str;
    public:
    mystring(string s) {
        m_str = s;
    }
};
class readclass {
    public:
    string showclass() {
        ifstream in;
        string line;
        int n = 0;
        in.open("main.cpp");
        if(in.fail()) {
            cout << "error opening a file" <<endl;
            in.close();
        }
        while (getline(in, line)) {
            if (line.find("class ") != string::npos && line.find("class ", 0) == 0) {
                n = n + 1;
                int one = line.find_first_of(" ");
                int two = line.find_first_of("{");
                cout << line.substr(0, two - 1) <<endl;
            }
        }
        cout << n << " class in main.cpp" <<endl;
        return "";
    }
};
int main() {
    readclass rfile;
    rfile.showclass();
    return 0;
}