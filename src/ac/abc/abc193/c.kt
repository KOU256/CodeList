package abc193

private fun readString() = readLine()!!
private fun readInt() = readLine()!!.toInt()
private fun readLong() = readLine()!!.toLong()
private fun readDouble() = readLine()!!.toDouble()
private fun readStringList() = readLine()!!.split(' ')
private fun readIntList() = readLine()!!.split(' ').map { it.toInt() }
private fun readLongList() = readLine()!!.split(' ').map { it.toLong() }
private fun readDoubleList() = readLine()!!.split(' ').map { it.toDouble() }

fun main() {
    val n = readLong()

    val expressed_number = mutableSetOf<Long>()
    if (n > 1) {
        for (i in 2..n) {
            var pow = i * i
            if (pow > n) {
                break
            }
            while (pow <= n) {
                expressed_number.add(pow)
                pow *= i
            }
        }
        println(n - expressed_number.size)
    }
    else {
        println(1)
    }
}