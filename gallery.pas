{ constraints }
const
    MAXN = 100000;

{ input data }
var
    N, i  : longint;
    X, Y  : array[0..MAXN-1] of longint;

begin
{
    uncomment the following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    readln(N);
    for i:=0 to N-1 do
        readln(X[i], Y[i]);

    { insert your code here }

    writeln('NO'); { or 'YES' }
end.
