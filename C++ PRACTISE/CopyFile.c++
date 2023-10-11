#include<iostream>
#include<fstream>
using namespace std;

inline void openerror (const char * file)
{
    cerr << "Error on opening the file " << file << endl;
    exit(1);
}
void copy(istream &is ,ostream &os);

int main(int argc,char * argv[])
{
    if (argc < 2 || argc > 3)
    {
        cerr << "Call : fcopy1 Source [Destination]" << endl;
        return 1; 
    }
    ifstream infile(argv[1]);
    if (!infile.is_open())
    {
        openerror(argv[1]);
        if (argc==2)
        {
            copy(infile,cout);
        }
        else
        {
            ofstream outfile (argv[2]);
            if (!outfile.is_open())
            {
                openerror(argv[2]);
                copy(infile,outfile);
                outfile.close();
            }
            infile.close();
            return 0;
        }
    }
}

void copy(istream & is ,ostream & os)
{
    char c;
    while (is.get(c))
    {
        os.put(c);
    }
}