/*
In IP networking host (e.g. your PC) uses network address
(na) and network mask (nm) from it’s routing table to determine if
given address (ip) is part of network or not. All zero bits in
network mask are zero in network address too. Host applies
some bitwise operation (you need to guess) to ip and nm in
order to get network addres of this specific ip and if it equals to
na then ip is part of network.
Implement function that takes IP address ip, network address
na, network mask nm and returns 1 (one) if ip is part of network
represented by na/nm and 0 (zero) otherwise.
For instance ip == 192.168.0.1, na == 192.0.0.0, nm ==
255.0.0.0 should return 1; while ip == 10.0.0.1 with same na
and nm should return 0.
Extend check for wrong na, when some of the bits in na are 1,
while they are 0 in network mask nm; use xor instead of
compare. For instance with arguments ip == 192.168.0.1, na
== 192.168.1.1, nm == 255.255.0.0 should return 1 (one) and
report for incorrect na.
*/

#include <stdio.h>

int ChechIp(int ip[4], int nm[4],int na[4]){
	int check = 0;
	
	if (na[0] == (ip[0] & nm[0])) {
		if (na[1] == (ip[1] & nm[1])) {
			if (na[2] == (ip[2] & nm[2])) {
				if (na[3] == (ip[3] & nm[3])) check = 1;
			}}}
	return check;
	
}



int main() {



	int ip[] = {192,168,0,1};
	int nm[] = {255,0,0,0};
	int na[] = {192,0,0,0};	
	
	if (ChechIp(ip,nm,na) == 1)
	{
		printf("\n\rall ok!\n\r");
	}else
	{
		printf("\n\rnot ok :( \n\r");		
	}
	
	
	return 0;
}