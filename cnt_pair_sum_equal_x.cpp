// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    int countPairs(struct Node *head1, struct Node *head2, int x)
    {
        unordered_set<int> s;

        Node *cur = head1;
        while (cur)
        {
            s.insert(cur->data);
            cur = cur->next;
        }

        Node *curr = head2;
        int cnt = 0;
        while (curr)
        {
            if (s.find(x - (curr->data)) != s.end())
            {
                cnt++;
            }
            curr = curr->next;
        }

        return cnt;
    }
};