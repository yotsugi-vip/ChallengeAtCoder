s = gets.chomp

for i in s.bytes
    if !(i >= 0x30 && i <= 0x39)
        print "error\n"
        exit
    end
end

print s.to_i*2