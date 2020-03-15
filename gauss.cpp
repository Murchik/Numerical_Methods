#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    int M = 0; // Кол-во строк
    int N = 0; // Кол-во эл-ов в строке
    double multiplier;
    double divider;
    double bComb;
    double value;

    cout << "Введите матрицу: " << endl;
    cin >> M >> N;

    vector<vector<double>> Matrix(M);
    vector<double> b(M);
    vector<double> linearComb(N);

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> value;
            Matrix[i].push_back(value);
        }
        cin >> value;
        b[i] = value;
    }

    cout << "Считана матрица: " << endl;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << " | " << b[i] << endl;
    }

    for (int i = 0; i < M - 1; ++i)
    {
        for (int k = i; k < M - 1; ++k)
        {
            divider = Matrix[i][i];
            multiplier = Matrix[k + 1][i];
            for (int j = 0; j < N; ++j)
            {
                linearComb[j] = Matrix[i][j];
                linearComb[j] /= divider;
                linearComb[j] *= multiplier;
            }
            for (int j = 0; j < N; ++j)
            {
                Matrix[k + 1][j] -= linearComb[j];
            }
            bComb = b[i];
            bComb /= divider;
            bComb *= multiplier;
            b[k + 1] -= bComb;
        }
    }
    cout << "Матрица: " << endl;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << " | " << b[i] << endl;
    }

    return 0;
}
