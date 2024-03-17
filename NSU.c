#include <stdio.h>

int main()
{
    int addm, scrtm, rfid, tfee, clfee, sactfee, lbfee, sclfee, hostel, handcost, semester, total;

    addm = 25000;
    scrtm = 10000;
    rfid = 1000;
    tfee = 845000;
    clfee = 2500;
    sactfee = 3000;
    lbfee = 1500;
    sclfee = 2500;

    printf("Enter amount of Hostel Fee: ");
    scanf("%d", &hostel);

    printf("Enter amount of Hand Cost: ");
    scanf("%d", &handcost);

    printf("Enter Semester Count: ");
    scanf("%d", &semester);

    total = addm + scrtm + rfid + tfee + ((clfee + sactfee + lbfee + sclfee) * semester) + (hostel * semester * 4) + (handcost * semester * 4);

    printf("Total Cost: %d", total);

    return 0;
}
