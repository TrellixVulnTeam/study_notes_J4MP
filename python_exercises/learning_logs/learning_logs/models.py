from django.db import models

# Create your models here.
class Topic(models.Model):
    text = models.CharField(max_length=20)
    date_added = models.DateTimeField(auto_now=True)

    def __str__(self):
        return self.text

class Entry(models.Model):
    topic = models.ForeignKey(Topic, on_delete=models.CASCADE)
    text = models.TextField()
    date_added = models.DateTimeField(auto_now=True)

    def __str__(self):
        return self.text[:40] + "..."