#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class replacemystream {
    public:
        void replacestring(string n, string m) {
            ofstream out;
            ifstream in;
            in.open("main.cpp");
            out.open("rmain.cpp");
            char c;
            while (!in.eof()) {
                in.get(c);
                if (c == n[0]) {
                    for (int i = 0; i < n.length(); i++) {
                        in.get(c);
                        if (c != n[i]) {
                            break;
                        } 
                        if(i == m.length()-1) {
                            for(int j = 0; j < m.length(); j++) {
                                out << m[j];
                            }
                        }
                    }
                }
                else {
                    out << c;
                }
            }
        in.close();
        out.close();
        }
};
int main() {
    replacemystream my;
    my.replacestring("IU","IU is best");
    return 0;
}
