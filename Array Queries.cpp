#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the freqQuery function below.
bool freq(vector<int>v,int x){
    unordered_map<int,int>u;
    for(int i=0;i<v.size();i++)
      u[v[i]]++;
      for(auto i:u){
          if(i.second==x)
          return true;
      }
      return false;
}
void del(vector<int>&a,int x){
    for (auto i = a.begin(); i != a.end(); ++i) {
        if (*i == x) {
            a.erase(i);
            return;
        }
    }
}
vector<int> freqQuery(vector<vector<int>> q) {
  vector<int>f;
  vector<int>ans;
  for(int i=0;i<q.size();i++){
      if(q[i][0]==1){
          f.push_back(q[i][1]);
      }
      else if(q[i][0]==2){
          del(f,q[i][1]);
      }
      else if(q[i][0]==3){
          if(freq(f,q[i][1]))
          ans.push_back(1);
          else
          ans.push_back(0);
      }
  }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    vector<vector<int>> queries(q);

    for (int i = 0; i < q; i++) {
        queries[i].resize(2);

        string queries_row_temp_temp;
        getline(cin, queries_row_temp_temp);

        vector<string> queries_row_temp = split(rtrim(queries_row_temp_temp));

        for (int j = 0; j < 2; j++) {
            int queries_row_item = stoi(queries_row_temp[j]);

            queries[i][j] = queries_row_item;
        }
    }

    vector<int> ans = freqQuery(queries);

    for (int i = 0; i < ans.size(); i++) {
        fout << ans[i];

        if (i != ans.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
