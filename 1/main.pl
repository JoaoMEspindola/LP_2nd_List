# A perl code to demonstrate dynamic scoping
$x = 10;
sub f
{
   return $x;
}
sub g
{
   local $x = 20;
   return f();
}

sub h
{
    my $x = 30;
    print "$x\n";
    return f();
}
print g()."\n";
print h()."\n";