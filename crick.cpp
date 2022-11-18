#include <iostream>
using namespace std;

class cricketer
{
protected:
    int total_runs;
    int avg_runs;
    int total_matches;
    int best_performance;

public:
    void setData(int total_runs, int avg_runs, int total_matches, int best_performance)
    {
        this->total_runs = total_runs;
        this->avg_runs = avg_runs;
        this->total_matches = total_matches;
        this->best_performance = best_performance;
    }
};
class batsman : public cricketer
{
public:
    void Display()
    {
        cout << "Total runs " << total_runs << endl;
        cout << "Total matches " << total_matches << endl;
        cout << "Average runs " << total_runs / total_matches << endl;
        cout << "Best performance " << best_performance << endl;
    }
};
int main()
{
    batsman b1;
    b1.setData(20000, 75, 200, 125);
    b1.Display();
    return 0;
}
