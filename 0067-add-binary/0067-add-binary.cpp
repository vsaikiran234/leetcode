class Solution { // class Solution {}
 public: // public:
  string addBinary(string a, string b) { // string addBinary(string a, string b)
    string ans; // string ans;
    int carry = 0; // int carry = 0;
    int i = a.length() - 1; // int i = a.length() - 1;
    int j = b.length() - 1;// in t j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) { // while (i >=0 || j >= 0 || carry )
      if (i >= 0) // if (i >=0)
        carry += a[i--] - '0'; // carry += a[i--]
      if (j >= 0) // if (j >= 0)
        carry += b[j--] - '0'; // carry += b[j--] - '0';
      ans += carry % 2 + '0'; // ans
      carry /= 2;
    }

    reverse(ans.begin(), ans.end());
    return ans;
  }
};