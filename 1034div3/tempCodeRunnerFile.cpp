        for (auto &ch : s)
        {
            if (ch == '1')
                one++;
        }
        if (one <= k)
        {
            cout << "" << endl;
            continue;
        }