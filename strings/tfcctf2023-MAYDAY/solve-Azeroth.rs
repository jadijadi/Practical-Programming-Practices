use std::fmt::{self, Display};

#[derive(Debug)]
enum Special {
    /// number 0..9
    Number(u8),

    /// any char like dash(-)
    Char(char),
}

// Special to String
impl Display for Special {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Number(n) => write!(f, "{}", n),
            Self::Char(c) => write!(f, "{}", c),
        }
    }
}

// Turns &str to Special enum
//
// "One" => Special::Number(1)
impl From<&str> for Special {
    fn from(value: &str) -> Self {
        // Makes shorthand for enum items
        //
        // Special::Number(n) => Number(n)
        use Special::*;

        match value {
            "Zero" => Number(0),
            "One" => Number(1),
            "Two" => Number(2),
            "Three" => Number(3),
            "Four" => Number(4),
            "Five" => Number(5),
            "Six" => Number(6),
            "Seven" => Number(7),
            "Eight" => Number(8),
            "Nine" => Number(9),
            "Dash" => Char('-'),

            s => Char(s.chars().nth(0).unwrap()),
        }
    }
}

/// Doing the actual work
///
/// Recives input and returns the answer
fn decode_message(input: &str) -> String {
    // Split input by space
    let words = input.split(" ");

    words
        // Into Iterator
        .into_iter()
        // Map over words and turn them into Special Enum
        .map(|w| Special::from(w))
        // Map over specials and turn them into string
        .map(|special| special.to_string())
        // Collect the result as string[]
        .collect::<Vec<String>>()
        // Join them into one string
        .join("")
}

fn main() {
    let input = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven";

    let secret = decode_message(&input);

    println!("{}", secret);
}
