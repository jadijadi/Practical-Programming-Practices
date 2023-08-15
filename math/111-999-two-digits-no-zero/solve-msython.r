count <- 0
library(sets)
for (i in 111:999){
    digits <- c()
    for (j in 0:2){
        digit = i%%10
        digits <- c(digits,digit)
        i = i%/%10
    }
    if (length(as.set(digits)) == 2 && !(0 %in% digits)){
        count <- count + 1
    }
}
print(count)
