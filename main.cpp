#include <iostream>

using namespace std;

int main()
{
    int vote, totalVotes;
    int dessertVote[5];
    double dessVotePerc[5];
    for(int x = 0; x < 5; x++)
    {
        dessertVote[x] = 0;
        dessVotePerc[x] = 0.00;
    }
    totalVotes = 0;

    cout << "******  FAVORITE DESSERT OPINION POLL  ******" << endl;
    cout << "\t1.  Key Lime Pie\n\t2.  Chocolate Cake\n\t3.  Cheesecake\n\t4.  Apple Pie with Ice Cream";
    cout << "\n\t5.  I have a different favorite dessert\n\t6.  Quit\n\n";

    cout << "Please choose your favorite dessert number from the listing above: ";

    do
    {
        cin >> vote;
        if(vote > 0 && vote < 6)
            {totalVotes = totalVotes + 1;
            dessertVote[vote - 1] = dessertVote[vote - 1] + 1;}
        else
        {if(vote != 6)
            cout << "Please enter in a valid dessert #.";}
    } while(vote != 6);

    for(int y = 0; y < 5; y++)
        {cout << y+1 << "=" << dessertVote[y] << totalVotes << endl;
            dessVotePerc[y] = dessertVote[y] / totalVotes;
            cout << dessVotePerc[y];}

    cout << "******  FAVORITE DESSERT POLL RESULTS  ******" << endl;
    cout << "\t\tITEM\t\t\tVOTES\t\t%" << endl;
    cout << "\t1.  Key Lime Pie\t\t\t" << dessertVote[0] << "\t\t" << dessVotePerc[0] << endl;
    cout << "\t2.  Chocolate Cake\t\t\t" << dessertVote[1] << "\t\t" << dessVotePerc[1] << endl;
    cout << "\t3.  Cheesecake\t\t\t\t" << dessertVote[2] << "\t\t" << dessVotePerc[2] << endl;
    cout << "\t4.  Apple Pie with Ice Cream\t\t" << dessertVote[3] << "\t\t" << dessVotePerc[3] << endl;
    cout << "\t5.  I have a different favorite dessert\t" << dessertVote[4] << "\t\t" << dessVotePerc[4] << endl;

    return 0;
}
