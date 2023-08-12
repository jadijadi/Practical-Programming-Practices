use std::collections::HashSet;

fn main() {
    // Idiomatic Rust
    let counter = (100..1000)
        .filter(|&n| {
            let n = n.to_string().chars().collect::<HashSet<char>>();
            !n.contains(&'0') && n.len() == 2
        })
        .count();
    println!("{counter}");
}
