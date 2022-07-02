from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.
def home(request):
    return render(request,'impQ/home.html')
def unit3(request):
    return render(request,'impQ/unit3.html')
def unit4(request):
    return render(request,'impQ/unit4.html')
def unit5(request):
    return render(request,'impQ/unit5.html')
def unit6(request):
    return render(request,'impQ/unit6.html')