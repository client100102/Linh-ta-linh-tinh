//trò chơi đoán số random từ 1 đến 100 cơ bản
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number, guess, tries = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    cout << "Choi mot tro choi nhe, hay doan mot so tu 1 den 100 nao.\n";
    do
    {
        cout << "So ban doan: ";
        cin >> guess;
        tries++;

        if (guess > number)
            cout << "Hehehe cao qua roi!\n\n";
        else if (guess < number)
            cout << "Ui, so cao hon ti nao!\n\n";
        else
            cout << "\nChinh xac roi, ban da doan dung sau " << tries << " lan thu !\n" "Do la so: " << guess<< " =D";
    } while (guess != number);

    return 0;
}
