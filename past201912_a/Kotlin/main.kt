fun main(args: Array<String>){
    val s = readLine()
    
    for( b in s.toString().toByteArray(Charsets.UTF_8) ){
        if(!(b>=0x30&&b<=0x39)){
            println("error")
            return
        }
    }
    println(s.toString().toInt()*2)
}