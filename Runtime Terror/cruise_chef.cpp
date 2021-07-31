#include <bits/stdc++.h>

using namespace std;

#define ll long long
int foo(std::vector<int> &input, int n)
{
    int max_dish = 0;
    int ans = 0;
    int arr[100001] = {0};
    for (const int &i : input)
    {
        arr[i]++;
    }

    for (int i = 0; i < 100001; i++)
        max_dish = max(max_dish, arr[i]);
    while (n != ans)
    {
        for (int i = 0; i < 100001; i++)
            if (arr[i] == max_dish)
                ans++;
        if (ans == n)
            return max_dish;
        else max_dish--;
    }
    return 0;
}
int main()
{
    int a;
    cin >> a;
    // vector<int> v;
    cin.ignore();

    std::vector<int> vec;
    std::string buffer;
    int data;
    std::getline(std::cin, buffer);
    std::istringstream iss(buffer);
    while (iss >> data)
        vec.push_back(data);
    cout << foo(vec, a) << endl;

    return 0;
}