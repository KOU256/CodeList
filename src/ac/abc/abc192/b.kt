package abc192

fun main() {
    val s = readLine()!!

    s.forEachIndexed { i, it ->
        if (i % 2 == 0 && it.isUpperCase()) {
            println("No")
            return
        }
        else if (i % 2 == 1 && it.isLowerCase()) {
            println("No")
            return
        }
    }
    println("Yes")
}