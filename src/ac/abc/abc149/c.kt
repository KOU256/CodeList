package abc149

private fun readString() = readLine()!!
private fun readInt() = readLine()!!.toInt()
private fun readLong() = readLine()!!.toLong()
private fun readDouble() = readLine()!!.toDouble()
private fun readStringList() = readLine()!!.split(' ')
private fun readIntList() = readLine()!!.split(' ').map { it.toInt() }
private fun readLongList() = readLine()!!.split(' ').map { it.toLong() }
private fun readDoubleList() = readLine()!!.split(' ').map { it.toDouble() }

fun main() {
    var x = readInt()

    while (!isPrime(x)) {
        x++
    }

    println(x)
}

fun isPrime(n: Int): Boolean {
    for (i in 2..n * n) {
        if (n % i == 0 ) {
            return false
        }
    }

    return true
}