#include "Mac.h"

Mac::Mac() : computer()
{
    appSil = appleSilicon();
}

double Mac::getPrice()
{
    return appSil.getPrice();
}

istream& operator>>(istream& in, Mac& mac)
{
    in >> *(mac.mb);
    in >> mac.appSil;
    return in;
}

ostream& operator<<(ostream& out, const Mac& mac)
{
    out << *(mac.pm) << *(mac.mb) << mac.appSil << endl;
    return out;
}
