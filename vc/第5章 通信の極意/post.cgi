#!/usr/local/bin/perl
print "HTTP/1.0 200 OK\n";
print "Content-type: text/plain\n";
print "\n";
print "post data\n";
print "=======================\n";
# 先頭の１行だけを表示
$_ = <>;
print $_;
print "=======================\n";
