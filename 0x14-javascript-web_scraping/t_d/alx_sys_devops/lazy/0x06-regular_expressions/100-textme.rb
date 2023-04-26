#!/usr/bin/env ruby
# puts ARGV[0].scan(/\[from:(\w+|\+\d{11})\] \[to:(\+?\d{11})\] \[flags:([-10:]+)/).join(',')
puts ARGV[0].scan(/\[from:(.*?)\] \[to:(.*?)\] \[flags:(.*?)\]/).join(',')
