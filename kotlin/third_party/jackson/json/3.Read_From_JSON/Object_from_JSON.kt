import com.fasterxml.jackson.module.kotlin.jacksonObjectMapper
import com.fasterxml.jackson.module.kotlin.readValue
import java.io.File

fun main(args: Array<String>)
{
    val mapper  = jacksonObjectMapper()
    val article = mapper.readValue<Article>(File("./my_article.json"))

    println(article)
}