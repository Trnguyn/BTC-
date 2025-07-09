class Movie:
    def __init__(self,title,director,actor,year,rating):
        self.title = title
        self.director = director
        self.actor = actor
        self.year = year
        self.rating = rating

    def read(self):
        return self.director, self.actor

    def __str__(self):
        return f"{self.title} sản xuất năm {self.year} có điểm đánh giá là {self.rating}"

film = Movie(
title="Những thiên thần của Charlie",
    director=["Elizabeth Banks"],
    actor=["Kristen Stewart", "Naomi Scott", "Ella Balinska"],
    year=2019,
    rating=4.5
)

print(film.read())
print(film.__str__())
