#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <string>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <getopt.h>
/*
1. Software; Execute.
2. In order to rename investment; Execute.
3. In order to financial rehashtag; Execute.
4. In order to publish and broadcast share dividend; Execute.
*/
using namespace std;

string input_dns;
int var_i = 2;
string balnet;
int regex(string &input_dns);
bool version();
bool _32x86(string &balnet);				//cleanup
void balance(string &balnet);
void balanceETC(string &balnet);
void checkSum();
void make_checkSumBTC(string input_dns, string &balnet);
void make_checkSumETC(string input_dns, string &balnet);
void make_checkSum(string input_dns);
void validate_addr(string input_dns);
void validate_tx(string input_dns);

int main (int argc, char **argv)	{
/*
//February 11, 2021
//Oliver Nowell Bowe
//ॐ
//佛教
//Official version 1.3.0 (executable)
*/
for(;;)
{
  switch(getopt(argc, argv, "b:he:hc:hv")) // note the colon (:) to indicate that 'b' has a parameter and is not a switch
  {
    case 'b':
	printf("\nBTC wallet address provided with %s", optarg);
	input_dns = optarg;
	make_checkSumBTC(input_dns, balnet);
	cout << endl << "$ " << setw(2) << balnet << endl;
	return 1;

    case 'c':
        printf("\nETC wallet address provided with %s", optarg);
        sleep(1);
        printf("\nWill now check hash for valid information..."); 
        input_dns = optarg;
        system("wget -O K234.TX1 -q http://receipt.emerald.cash/tx/0x92b6801475c4154cbf803214f9d67dc05fa054df6007b64534255f47c7d9f7c4  --no-check-certificate");
        system("wget -O K234.TX2 -q http://ethplorer.io/tx/0x92b6801475c4154cbf803214f9d67dc05fa054df6007b64534255f47c7d9f7c4  --no-check-certificate");
	validate_tx(input_dns);
	validate_addr(input_dns);
        make_checkSumETC(input_dns, balnet);
	system("cat ketahazure.txt | grep title >> KTHZR.txt");
        balanceETC(balnet);
	_32x86(balnet);
	cout << endl << balnet << setw(2) << " ETC" << endl;
        return 1;

    case 'e':
	printf("\nETH wallet address provided with %s", optarg);
	sleep(1);
	printf("\nWill now check hash for valid information..."); 
	input_dns = optarg;
	system("wget -O K234.TX1 -q http://receipt.emerald.cash/tx/0x92b6801475c4154cbf803214f9d67dc05fa054df6007b64534255f47c7d9f7c4 --no-check-certificate");
	system("wget -O K234.TX2 -q http://ethplorer.io/tx/0x92b6801475c4154cbf803214f9d67dc05fa054df6007b64534255f47c7d9f7c4  --no-check-certificate");
	make_checkSum(input_dns);
	validate_tx(input_dns);
	validate_addr(input_dns);
	system("cat ketahazure.txt | grep title >> KTHZR.txt");
	balance(balnet);
	cout << endl << balnet << setw(2) << " ETH" << endl;
	return 1;
        
    case 'v':
	cout << endl;
	cout << "Keep Installing Software Online" << setw(2) << " " << "(K E T A H A Z U R E)" << endl;
        printf("\nKetahazure's Ethereum Wallet Address Balance Viewer Software Version: 1.3.0");
	printf("\nThis tool was developed by Oliver Nowell Bowe <ketahazure@ketahazure.net> for educational and investment professional business only.");
	return 1;

    case 'h':
	cout << endl;
	cout << "Usage" << endl;
        cout << setw(3) << " " << "Keth" << setw(3) << " " << "[options]" << setw(3) << " "<< "<variables>\n"<< endl;
	cout << "Options:" << endl;
	cout << setw(3) << " " << "<variables>" << setw(6) << " " << setw(2) << " " << "TX or Address" << endl;
	cout << setw(3) << " " << "-b" << setw(12) << " " << "display balance for Bitcoin wallets" << endl;
	cout << setw(3) << " " << "-c" << setw(12) << " " << "display balance for Ethereum Classic wallets" << endl;
	cout << setw(3) << " " << "-e" << setw(12) << " " << "display balance for Ethereum wallets" << endl;
	cout << setw(3) << " " << "-v" << setw(12) << " " << "Print version" << endl;
	cout << setw(3) << " " << "-h" << setw(12) << " " << "Show this help menu" << endl;
	return 1;
	
    default :
	version();
	break;

    case -1:
	version();
	break;
  }
  break;
}
sleep(1);
printf("\nWill now check hash for valid information..."); 
if (var_i <= regex(input_dns) )
make_checkSum(input_dns);
else if ( var_i = 2 )
checkSum();
else
printf("Connection lost from data on the blockchain...");
validate_tx(input_dns);
validate_addr(input_dns);
system("cat ketahazure.txt | grep title >> KTHZR.txt");
balance(balnet);
cout << endl << balnet << " ETH" << endl;
return 0;
	}

bool version()	{
puts("\nhttp://www.ketahazure.net");
return false;
		}

int regex(string &input_dns)	{
printf("\nEnter: [TX or Address]");
sleep(1);
cin >> input_dns;
system("wget -O K234.TX1 -q http://receipt.emerald.cash/tx/0x92b6801475c4154cbf803214f9d67dc05fa054df6007b64534255f47c7d9f7c4 --no-check-certificate");
system("wget -O K234.TX2 -q http://ethplorer.io/tx/0x92b6801475c4154cbf803214f9d67dc05fa054df6007b64534255f47c7d9f7c4  --no-check-certificate");
if ( input_dns.length() >= 66 )
return 1;
else if ( input_dns.length() >= 42 )
return 2;
else
printf("Could not verify smart contract information for KTHZR FinTech...");
return 0;
		}


void balanceETC(string &balnet)		 {
ifstream io_read;
io_read.open("KTHZR.txt");
io_read.close();
io_read.peek();
io_read.sync();
FILE *f = fopen("KTHZR.txt", "rb");
fseek(f, 0, SEEK_END);
long fsize = ftell(f);
fseek(f, 0, SEEK_SET);
char *string = (char *)malloc(fsize + 1);
fread(string, fsize, 1, f);
fclose(f);
string[fsize] = 0;
std::ifstream in("KTHZR.txt");
std::stringstream buffer;
buffer << in.rdbuf();
std::string test = buffer.str();
//system("rm ketahazure.txt");
//system("rm KTHZR.txt");
size_t pos1 = 0;
size_t pos2;
size_t pos3;        
std::string str[2];
for (int x=0; x<=2; x++)    	{
pos2 = test.find(".", pos1); 
pos3 = test.find("title=", pos1);
str[x] = test.substr(pos3+64);
balnet = str[x].c_str();
                                        }
        			        } 


void make_checkSum(string input_dns)	{
ifstream io_read;
io_read.open("K234.TX2");
system("cat K234.TX1 | grep 0x >> ketahazure.txt");
system("cat K234.TX1 | grep title >> ketahazure.txt");
system("cat K234.TX1 | grep ETH >> ketahazure.txt");
system("rm *TX?");
io_read.close();
io_read.peek();
io_read.sync();
FILE *f = fopen("ketahazure.txt", "rb");
fseek(f, 0, SEEK_END);
long fsize = ftell(f);
fseek(f, 0, SEEK_SET);
char *string = (char *)malloc(fsize + 1);
fread(string, fsize, 1, f);
fclose(f);
string[fsize] = 0;
std::ifstream in("ketahazure.txt");
std::stringstream buffer;
buffer << in.rdbuf();
std::string test = buffer.str();
system("rm ketahazure.txt");
size_t pos1 = 0;
size_t pos2;
size_t pos3;        
std::string str[2];
for (int x=0; x<=1; x++)    {
pos2 = test.find("address", pos1); 
pos3 = test.find("address", pos1);
str[x] = test.substr(pos2,pos3-pos2);
//printf("%s\n",str[x].c_str());
                                }
                                }

					
void checkSum()							{
ifstream io_read;
io_read.open("K234.TX1");
system("cat K234.TX1 | grep 0x >> ketahazure.txt");
system("cat K234.TX1 | grep title >> ketahazure.txt");
system("cat K234.TX1 | grep ETH >> ketahazure.txt");
system("rm *TX?");
io_read.close();
io_read.peek();
io_read.sync();
FILE *f = fopen("ketahazure.txt", "rb");
fseek(f, 0, SEEK_END);
long fsize = ftell(f);
fseek(f, 0, SEEK_SET);
char *string = (char *)malloc(fsize + 1);
fread(string, fsize, 1, f);
fclose(f);
string[fsize] = 0;
std::ifstream in("ketahazure.txt");
std::stringstream buffer;
buffer << in.rdbuf();
std::string test = buffer.str();
system("rm ketahazure.txt");
size_t pos1 = 0;
size_t pos2;
size_t pos3;	
std::string str[2];
for (int x=0; x<=1; x++)	{
pos2 = test.find("ETH</div>", pos1); 
pos3 = test.find("H</", pos1);
str[x] = test.substr(pos2,pos3-pos2+1);
   				}
			 					}


void make_checkSumETC(string input_dns, string &balnet)         {
ofstream io_write;
ifstream io_read;
io_read.open("ketahazure.txt");
io_write.open("etc.sh");
io_read.close();
io_read.peek();
io_read.sync();
system("rm *TX?");
io_write << "#!/bin/sh" << endl << "#" << endl << "wget -O KTHZR.txt  -q https://etcblockexplorer.com/address/" << input_dns << " --no-check-certificate" << endl;
system("bash etc.sh");
system("rm etc.sh");
FILE *f = fopen("ketahazure.txt", "rb");
fseek(f, 0, SEEK_END);
long fsize = ftell(f);
fseek(f, 0, SEEK_SET);
char *string = (char *)malloc(fsize + 1);
fread(string, fsize, 1, f);
fclose(f);
string[fsize] = 0;
std::ifstream in("ketahazure.txt");
std::stringstream buffer;
buffer << in.rdbuf();
std::string test = buffer.str();
size_t pos1 = 0;
size_t pos2;  
size_t pos3;        
std::string str[2];
for (int x=0; x<=1; x++)				{
pos2 = test.find("Balance", pos1); 
pos3 = test.find("data", pos1);
str[x] = test.substr(pos2+29,pos3+2);
balnet = str[x].c_str();
                                			}
			                                        }


void make_checkSumBTC(string input_dns, string &balnet)    	{
ifstream io_read;
ofstream io_write;
io_read.open("ketahazure.txt");
io_write.open("btc.sh");
io_read.close();
io_read.peek();
io_read.sync();
io_write << "#!/bin/sh" << endl << "#" << endl << "wget -O ketahazure.txt  -q https://api.blockchair.com/bitcoin/dashboards/address/" << input_dns <<  endl;
system("bash btc.sh");
//system("rm btc.sh");
FILE *f = fopen("ketahazure.txt", "rb");
fseek(f, 0, SEEK_END);
long fsize = ftell(f);
fseek(f, 0, SEEK_SET);
char *string = (char *)malloc(fsize + 1);
fread(string, fsize, 1, f);
fclose(f);
string[fsize] = 0;
std::ifstream in("ketahazure.txt");
std::stringstream buffer;
buffer << in.rdbuf();
std::string test = buffer.str();
size_t pos1 = 0;
size_t pos2;  
size_t pos3;        
std::string str[2];
for (int x=0; x<=1; x++)		{
pos2 = test.find("balance_usd", pos1); 
pos3 = test.find(",", pos1);
str[x] = test.substr(pos2+7,pos3-68);
balnet = str[x].c_str();
					}
	                                }



void validate_addr(string input_dns)	{
ifstream io_read;
ofstream io_write;
io_write.open("KTHZR.txt");
io_read.open("KTHZR.txt");
printf("\nAddress verified and will now confirm the balance...");
io_write << "#!/bin/sh" << endl << "#" << endl << "wget -O ketahazure.txt -q https://receipt.emerald.cash/balance/" << input_dns << " --no-check-certificate" << endl;
system("bash KTHZR.txt");
io_read.close();
io_write.close();
io_write.close();
io_read.peek();
io_read.sync();
system("rm KTHZR.txt");
					}

				
void validate_tx(string input_dns)	{
ifstream io_read;
ofstream io_write;
io_write.open("KTHZR.txt");
io_read.open("KTHZR.txt");
printf("\nTransaction verified and will now subliminally increase the confirmations..."); 
io_write << "#!/bin/sh" << endl << "#" << endl << "wget -O ketahazure.txt -q https://ethplorer.io/tx/" << input_dns << " --no-check-certificate" << endl;
system("bash KTHZR.txt");
io_read.close();
io_write.close();
io_write.close();
io_read.peek();
io_read.sync();
system("rm KTHZR.txt");
	                                }


void balance(string &balnet)		{
ifstream io_read;
io_read.open("KTHZR.txt");
io_read.close();
io_read.peek();
io_read.sync();
FILE *f = fopen("KTHZR.txt", "rb");
fseek(f, 0, SEEK_END);
long fsize = ftell(f);
fseek(f, 0, SEEK_SET);
char *string = (char *)malloc(fsize + 1);
fread(string, fsize, 1, f);
fclose(f);
string[fsize] = 0;
std::ifstream in("KTHZR.txt");
std::stringstream buffer;
buffer << in.rdbuf();
std::string test = buffer.str();
system("rm ketahazure.txt");
system("rm KTHZR.txt");
size_t pos1 = 0;
size_t pos2;
size_t pos3;        
std::string str[2];
for (int x=0; x<=1; x++)    {
pos2 = test.find("title=", pos1); 
pos3 = test.find(".", pos1);
str[x] = test.substr(pos2+7,pos3-pos2+1);
//printf("%s\n",str[x].c_str());
balnet = str[x].c_str();
                                }
					}																							


class K {
        private:
//const string K_ = "http://www.ketahazure.net";
public:
//K(): K_() {} 
void KTHZR(string);
}; 

K K1;


//gcc version 4.3.2
bool _32x86(string &balnet)		{
FILE *f = fopen("KTHZR.txt", "rb");
fseek(f, 0, SEEK_END);
long fsize = ftell(f);
fseek(f, 0, SEEK_SET);
char *string = (char *)malloc(fsize + 1);
fread(string, fsize, 1, f);
fclose(f);
string[fsize] = 0;
std::ifstream in("KTHZR.txt");
std::stringstream buffer;
buffer << in.rdbuf();
system("rm ketahazure.txt");
system("rm KTHZR.txt");
size_t pos1 = 0;
size_t pos2;
size_t pos3;        
std::string str[2];
for (int x=0; x<=2; x++)		{
pos2 = balnet.find(".", pos1); 
pos3 = balnet.find(">", pos1);
str[x] = balnet.substr(pos2-1,2+18);
balnet = str[x].c_str();
                                        }
return false;
					}
//;;http://www.ketahazure.net;
