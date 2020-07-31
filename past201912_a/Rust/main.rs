use std::io;

fn main() {
    let mut s = String::new();

    io::stdin().read_line(&mut s).ok();

    for b in s.as_bytes() {
        if !( b >=&mut 0x30 && b <=&mut 0x39 ) {
            println!("error\n");
            return;
        }
    }

	println!("{}", s.parse::<u32>()*2);
    return;
}