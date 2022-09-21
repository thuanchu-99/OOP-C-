#include"lib.h"

bool checkdate(Date birth) {
    try {
        if (birth.year < 0 || birth.morth < 0 || birth.morth> 12 || birth.day < 0 || birth.day> 31)
        {
            throw Exception("Ngay khong hop le");
        }
        else
        {
            int ngaymax;
            switch (birth.morth)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                ngaymax = 31;
                break;
            case 2:
                if ((birth.year % 4 == 0 && birth.year % 100 != 0) || (birth.year % 400 == 0))
                    ngaymax = 29;
                else
                    ngaymax = 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                ngaymax = 30;
                break;
            }
            if (birth.day <= ngaymax)
            {
                return true;
            }
            else
            {
                throw Exception("Ngay khong hop le");
            }
        }
    }
    catch (Exception& ex)
    {
        cout << ex.what() << endl;
        return false;
    }
}

bool checkphone(string phone) {
    try
    {
        if (phone.size() > 0)
        {
            for (int i = 0; i < phone.length(); i++) {
                if ((phone[i] < 47) || (phone[i] > 58)) {
                    throw Exception("so dien thoai khong hop le!");
                }
            }
        }
        else
        {
            throw Exception("so dien thoai khong hop le!");
        }
    }
    catch (Exception& ex)
    {
        cout << ex.what() << endl;
        return false;
    }
    return true;
}

bool checkname(string name) {
    try
    {
        if (name.size() > 0)
        {
            for (int i = 0; i < name.length(); i++) {
                if ((name[i] > 64 && name[i] < 91)) {
                    continue;
                }
                if ((name[i] > 96) && (name[i] < 123))
                {
                    continue;
                }
                if (name[i] == ' ')
                {
                    continue;
                }
                else
                {
                    throw Exception("name khong hop le!");
                }
            }
        }
        else
        {
            throw Exception("name khong hop le!");
        }

    }
    catch (Exception& ex)
    {
        cout << ex.what() << endl;
        return false;
    }
    return true;
}

bool checkmail(string mail) {
    string sTemp = "@";
    try
    {
        for (int i = 0; i < mail.length(); i++)
        {
            if (mail[i] == ' ')
            {
                throw Exception("Email khong hop le!");
                break;
            }
        }
        int check = 0;
        for (int i = 0; i < mail.length(); i++)
        {
            if (mail[i] == '@')
            {
                check = 1;
                break;
            }
        }
        if (check == 0) {
            throw Exception("Email khong hop le!");
        }

    }
    catch (Exception& ex)
    {
        cout << ex.what() << endl;
        return false;
    }
    return true;
}
