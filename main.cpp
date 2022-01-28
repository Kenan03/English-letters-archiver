#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <fstream>
#include"Archiver.h"
using namespace std;

int main()
{
	Archiver a;
	size_t n = 0;
	for (char i = 'A'; i <= 'Z'; i++)
	{
		a.toBin(n++, i);
	}
	for (char i = 'a'; i <= 'z'; i++)
	{
		a.toBin(n++, i);
	}
	a.punctuation_marks();
	string in;
	cout << "Enter name input file" << endl;
	cin >> in;
	string code;
	a.load(in, code);
	string code1;
	a.lengthstring(code1, code);
	vector <bool> code2;
	a.lengthbool(code2, code1);
	string in1;
	cout << "Enter file name to archive" << endl;
	cin >> in1;
	a.coding(in1, code2);
	string code3;
	string in2;
	cout << "Enter file name to unzip" << endl;
	cin >> in2;
	a.decoding(in2, code3);
	string in3;
	cout << "Enter name file to save" << endl;
	cin >> in3;
	a.print(in3, code3);
	return 0;
}









/*
map<char, string> alphabet;
alphabet['A'] = "000001";
alphabet['B'] = "000010";
alphabet['C'] = "000011";
alphabet['D'] = "000100";
alphabet['E'] = "000101";
alphabet['F'] = "000110";
alphabet['G'] = "000111";
alphabet['H'] = "001000";
alphabet['I'] = "001001";
alphabet['J'] = "001010";
alphabet['K'] = "001011";
alphabet['L'] = "001100";
alphabet['M'] = "001101";
alphabet['N'] = "001110";
alphabet['O'] = "001111";
alphabet['P'] = "010000";
alphabet['Q'] = "010001";
alphabet['R'] = "010010";
alphabet['S'] = "010011";
alphabet['T'] = "010100";
alphabet['U'] = "010101";
alphabet['V'] = "010110";
alphabet['W'] = "010111";
alphabet['X'] = "011000";
alphabet['Y'] = "011001";
alphabet['Z'] = "011010";
alphabet['a'] = "011011";
alphabet['b'] = "011100";
alphabet['c'] = "011101";
alphabet['d'] = "011110";
alphabet['e'] = "011111";
alphabet['f'] = "100000";
alphabet['g'] = "100001";
alphabet['h'] = "100010";
alphabet['i'] = "100011";
alphabet['j'] = "100100";
alphabet['k'] = "100101";
alphabet['l'] = "100110";
alphabet['m'] = "100111";
alphabet['n'] = "101000";
alphabet['o'] = "101001";
alphabet['p'] = "101010";
alphabet['q'] = "101011";
alphabet['r'] = "101100";
alphabet['s'] = "101101";
alphabet['t'] = "101110";
alphabet['u'] = "101111";
alphabet['v'] = "110000";
alphabet['w'] = "110001";
alphabet['x'] = "110010";
alphabet['y'] = "110011";
alphabet['z'] = "110100";
alphabet[' '] = "110101";
alphabet['!'] = "110110";
alphabet[','] = "110111";
alphabet['.'] = "111000";
*/
/*
	if (sx != 0)
	{
		for (int i = sz; i < code1.length(); i++)
		{
			c = c + code1[i];
			map<char, string> ::iterator itr;
			if (c.size() == 6)
			{
				for (itr = alphabet.begin(); itr != alphabet.end(); itr++)
				{
					if (c == itr->second)
					{
						ne << itr->first;
						c.clear();
					}
				}
			}
		}
	}
	*/
/*

if ((f.size() - n - 1) < 8)
			{
				int d = f.size() - n - 1 - 1;
				for (int n = count1 + 1; n < f.size(); n++)
				{
					buf = buf | f[n] << (7 - count);
					count++;
					if (count == d)
					{
						count = 0;
						g << buf;
						buf = 0;
						j = d;
						break;
					}


				}
			}
			count1--;
			count1--;
		if (count1 == 0)
		{
			bool b = byte & (1 << (7 - count));
			if (b == 0)
				t.push_back(0);
			if (b == 1)
				t.push_back(1);
			count++;
			if (count == j)
			{
				for (int i = 0; i < t.size(); i++)
				{
					if (t[i] == 0)
					{
						x = "0";
					}
					if (t[i] == 1)
					{
						y = "1";
					}
					z = z + x + y;
					x.clear();
					y.clear();
				}
				t.clear();
				count = 0;
				byte = F.get();
			}
		}
	m['A'] = m['a'] = "000001";
	m['B'] = m['b'] = "000010";
	m['C'] = m['c'] = "000011";
	m['D'] = m['d'] = "000100";
	m['E'] = m['e'] = "000101";
	m['F'] = m['f'] = "000110";
	m['G'] = m['g'] = "000111";
	m['H'] = m['h'] = "001000";
	m['I'] = m['i'] = "001001";
	m['J'] = m['j'] = "001010";
	m['K'] = m['k'] = "001011";
	m['L'] = m['l'] = "001100";
	m['M'] = m['m'] = "001101";
	m['N'] = m['n'] = "001110";
	m['O'] = m['o'] = "001111";
	m['P'] = m['p'] = "010000";
	m['Q'] = m['q'] = "010001";
	m['R'] = m['r'] = "010010";
	m['S'] = m['s'] = "010011";
	m['T'] = m['t'] = "010100";
	m['U'] = m['u'] = "010101";
	m['V'] = m['v'] = "010110";
	m['W'] = m['w'] = "010111";
	m['X'] = m['x'] = "011000";
	m['Y'] = m['y'] = "011001";
	m['Z'] = m['z'] = "011010";
		if (score == 5)
		{
			map<char, string> ::iterator itr;
			for (itr = m.begin(); itr != m.end(); itr++)
			{
				for (int i = 0; i < t.size(); i++)
				{
					string r = itr->second;
					vector <bool> q;
					for (int i = 0; i < r.length(); i++) //проходим по строке и выводим 0 и 1
					{
						if (r[i] == '0')
						{
							q.push_back(0);
						}
						if (r[i] == '1')
						{
							q.push_back(1);
						}
					}
					if (t[i] == q[i])
					{
						cout << itr->first;
					}
					r.clear();

				}
			}
			score = 0;

	}

		count++;
		if (count == 8) { count = 0; byte = F.get(); }
		bool b = byte & (1 << (7 - count));
		if (b == false) //0
		{
			 x = "0";
		}
		if(b == true) //1
		{
			 y = "1";
		}
		z = z + x + y;
		x.clear();
		y.clear();
		score++;
		if (score == 8)
		{
			string c;
			c = z;
			for (int i = 0; i < c.length(); i = i + 5) //проходим по строке и выводим 0 и 1
			{
				map<char, string> ::iterator itr;
				for (itr = m.begin(); itr != m.end(); itr++)
				{
					if (c == itr->second)
					{
						c = itr->first;
						cout << c;
						break;
					}
				}
			}
			z.clear();
			score = 0;
		}
		count++;
		if (count == 8)
		{
			count = 0;
			byte = F.get();
		}
		*/
//print(root);
/*

void print(Node* root, unsigned k = 8)
{
	if (root != NULL)
	{
		print(root->left, k + 3);
		for (unsigned i = 0; i < k; i++)
		{
			cout << " ";
		}
		if (root->c)
		{
			cout << root->a << " (" << root->c << ")" << endl;
		}
		else
		{
			cout << root->a << endl;
			print(root->right, k + 3);
		}
	}
}

 
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string>
#include <fstream>

using namespace std;


class Node
{
public:
	int a;
	char c;
	Node* left, * right;

	Node() {}

	Node(Node* L, Node* R)
	{
		left = L;
		right = R;
		a = L->a + R->a;
	}

};


struct MyCompare
{
	bool operator() (Node* l, Node* r) const
	{
		return l->a < r->a;
	}
};


vector<bool> code;
map<char, vector<bool> > table;
void BuildTable(Node* root)
{

	if (root->left != NULL)
	{
		code.push_back(0);
		BuildTable(root->left);
	}
	if (root->right != NULL)
	{
		code.push_back(1);
		BuildTable(root->right);
	}
	if (root->c)
	{
		table[root->c] = code;
	}
	if (code.size() > 0)
	{
		code.pop_back();
	}

}



int main()
{

	ifstream f1;
	f1.open("course.txt");
	string f2;
	while (!f1.eof())
	{
		f2 = "";
		getline(f1, f2);
	}
	string s;
	s = f2;
	//string s = "it is my striiiiing!!!!";
	map<char, int> m;
	for(int i = 0; i <s.length(); i++)
	{
		char c = s[i];
		m[c]++;
	}

	list<Node*> t;


	map<char, int> ::iterator i;
	for (i = m.begin(); i != m.end(); ++i)
	{
		Node* p = new Node;
		p->c = i->first;
		p->a = i->second;
		t.push_back(p);
	}

	while(t.size() != 1)
	{
		t.sort(MyCompare()); //сортировка листа

		Node* SonL = t.front();
		t.pop_front();
		Node* SonR = t.front();
		t.pop_front();

		Node* parent = new Node(SonL, SonR);
		t.push_back(parent);
	}
	Node* root = t.front();


	BuildTable(root);


	for (int i = 0; i < s.length(); i++)
	{
		char c = s[i];
		vector<bool> x = table[c];
		for (int n = 0; n < x.size(); n++)
		{
			cout << x[n];
		}

	}
	cout << endl;

	ofstream g("out.txt", ios::out | ios::binary);
	int count = 0;
	char buf = 0;
	for (int i = 0; i < s.length(); i++)
	{
		char c = s[i];
		vector<bool> x = table[c];
		for (int n = 0; n < x.size(); n++)
		{
			buf = buf | x[n] << (7 - count);
			count++;
			if (count == 8)
			{
				count = 0;
				g << buf;
				buf = 0;
			}

		}
	}
	g.close();
	f1.close();


	ifstream F("out.txt", ios::in | ios::binary);

	setlocale(LC_ALL, "Russian"); // чтоб русские символы отображались в командной строке

	Node* p = root;
	count = 0;
	char byte;
	byte = F.get();
	while (!F.eof())
	{
		bool b = byte & (1 << (7 - count));
		if (b)
			p = p->right;
		else
			p = p->left;
		if (p->left == NULL && p->right == NULL)
		{
			cout << p->c; p = root;
		}
		count++;
		if (count == 8) { count = 0; byte = F.get(); }
	}

	F.close();

	return 0;
}

*/
















