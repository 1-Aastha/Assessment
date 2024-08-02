/* Design Browser History
Moderate
80/80
Average time to solve is 25m
Contributed by
30 upvotes
Asked in company
Problem statement

Your task is to maintain a data structure that supports the following functions of a web browser.

1- Browser(homepage): Set homepage of the browser

2- Visit(url): Visit the url from the current page. It clears up all the forward history.

3- Back(steps): Move ‘steps’ backward in the browser history

4- Forward(steps): Move ‘steps’ forward in the browser history

Note:

If you can’t move steps forward or backward, just return the last website that can be reached.

The Queries are in the given format-:
The first line of each query contains the string representing the homepage of the web browser.

(1, url): Visit the url from the current page. 

(2, steps): Move ‘steps’ backward in the browser history.

(3, steps): Move ‘steps’ forward in the browser history.

For example:

You are queries as  [[“homepage.com”], [1 , “facebook.com”], [1, “codingninjas.com”],[2, 1], [3, 1]]
1 query is the query that sets the homepage as “homepage.com”.
2 query is the query to visit “facebook.com”
3 query is the query to visit “codingninjas.com”
4 query is the query that moves back one step to “facebook.com”
5 query is the query that moves forward one step to “codingninjas.com”

Hence the answer is [“facebook.com”, “codingninjas.com”]

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:

5
homepage.com
1 facebook.com
1 codingninjas.com    
2 1
3 1

Explaination:

1 query is the query that sets the homepage as “homepage.com”.
2 query is the query to visit “facebook.com”
3 query is the query to visit “codingninjas.com”
4 query is the query that moves back one step to “facebook.com”
5 query is the query that moves forward one step to “codingninjas.com”

Hence the answer is [“facebook.com”, “codingninjas.com”]

Sample Output 1

facebook.com codingninjas.com

Sample Input 2:

4
Homepage.com
1 page.com
2 3
3 3

Sampe Output 2:

Homepage.com page.com 

Constraints:

2 <= Q <= 10^5
1 <= |url| <= 10^3
1 <= steps <= 10^5

Time Limit: 1 sec

/*
  class Browser
{
    public:
    string homepage;
    vector<string>p;
    int i=0;
    
    Browser(string &homepage)
    {
         this->homepage=homepage;
         p.push_back(homepage);
         i=0;
    }

    void visit(string &url)
    {
         p.erase(p.begin()+i+1,p.end());
        p.push_back(url);
        i=p.size()-1;
    }

    string back(int steps)
    {
        i=i-steps;
        if(i<0)
        i=0;
        return p[i];
    }

    string forward(int steps)
    {
       i=i+steps;
        if(i>=p.size())
        i=p.size()-1;
        return p[i];
    }
};
