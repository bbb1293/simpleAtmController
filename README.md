# simpleAtmController

Simple ATM controller having ATM functions such as checking balance, deposit, and withdrawal.

## Installation

Use [GIT](https://git-scm.com/), version control system, to clone simpleAtmController repository. 
```bash
git clone https://github.com/bbb1293/simpleAtmController.git
```

## usage

```bash
./atmController.exe
```

Or, if you want to recompile the source files (if you have a c++ compiler in your device),
```bash
g++ atmController.cpp bankApi.cpp -o atmController
./atmController.exe
```

Then,

```bash
./atmController.exe

Insert your card (####-####-####-####)
```

### Insert Card

If you type invalid input, then
```bash
Insert your card (####-####-####-####)
asdfg
... processing
Invalid card number!

Insert your card (####-####-####-####)
```

Or, if you type a card number which does not exist in bank system,
```bash
Insert your card (####-####-####-####)
4523-2346-4563-7856
... processing
You are not our user

Insert your card (####-####-####-####)
```

So, if you put a valid card number,
```bash
Insert your card (####-####-####-####)
1111-2222-3333-4444
... processing
Welcome James

Type your pin number (4-6 length)
```

### Check Pin Number
If you type invalid input,
```bash
Type your pin number (4-6 length)
1
... processing
Invalid pin number

Type your pin number (4-6 length)
```

If you type wrong pin number,
```bash
Type your pin number (4-6 length)
5142
... processing
Wrong pin number

Type your pin number (4-6 length)
```

If you type invalid/wrong pin number 5 times,
```bash
Type your pin number (4-6 length)
1
... processing
Invalid pin number
James\'s account is locked because of 5 invalid attempts
See you next time!
```

And, if you type right pin number,
```bash
Type your pin number (4-6 length)
1234
... processing
Welcome James!

Select the account you want
1. Saving Account
2. Checking Account
0. Exit
```

### Select Account
If you want to exit, type 0
```bash
Select the account you want
1. Saving Account
2. Checking Account
0. Exit

0
See you next time!
```

Otherwise, select one account
```bash
Select the account you want
1. Saving Account
2. Checking Account
0. Exit

1
You select Saving Account

With Saving Account, you can
1. See the balance
2. Deposit
3. Withdraw
4. Go to the previous Page
0. Exit
```

### Bank
Of course, you can exit the program by typing 0.
```bash
With Saving Account, you can
1. See the balance
2. Deposit
3. Withdraw
4. Go to the previous Page
0. Exit

0
See you next time!
```

If you want to check current balance, type 1
```bash
With Saving Account, you can
1. See the balance
2. Deposit
3. Withdraw
4. Go to the previous Page
0. Exit

1
Your balance is \$500

With Saving Account, you can
1. See the balance
2. Deposit
3. Withdraw
4. Go to the previous Page
0. Exit
```

If you want to deposit, type 2, and type the money you want to deposit
```bash
With Saving Account, you can
1. See the balance
2. Deposit
3. Withdraw
4. Go to the previous Page
0. Exit

2

Hou much would you like to deposit
100

Your balance becomes \$600 from \$500

...
```

If you want to withdraw, type 3, and type the money you want to withdraw
```bash
With Saving Account, you can
1. See the balance
2. Deposit
3. Withdraw
4. Go to the previous Page
0. Exit

3

Hou much would you like to withdraw
100

Your balance becomes \$500 from \$600

With Saving...
```

However, if you type the money larger than the balance,
```bash
With Saving Account, you can
1. See the balance
2. Deposit
3. Withdraw
4. Go to the previous Page
0. Exit

3

Hou much would you like to withdraw
100

Your balance is \$500, less than \$10000 

With Saving...
```
and, nothing happens

If you want to go to the previous page, to select an account, type 4
```bash
With Saving Account, you can
1. See the balance
2. Deposit
3. Withdraw
4. Go to the previous Page
0. Exit

4

Select the account you want
...
```

## License
[MIT](https://choosealicense.com/licenses/mit/)