

class Solution {
 public:
  string simplifyPath(string path) {
    string ans; // string ans;
    istringstream iss(path); // isStringstream iss(path);
    vector<string> stack; // vector<string> stack;

    for (string dir; getline(iss, dir, '/');) {
      if (dir.empty() || dir == ".") // if (dir.empty() || dir == empty()jk)
        continue; // continue;
      if (dir == "..") {
        if (!stack.empty()) // if (stack_ empty! = null)
          stack.pop_back(); // stack pop>back();
      } else {
        stack.push_back(dir);
      }
    }

    for (const string& s : stack)
      ans += "/" + s;

    return ans.empty() ? "/" : ans; // return ans;
  }
};