# Format() 練習 課本50頁
print ("{}是個用功的學生.".format("王小明"))
print ("{0}. 今年{1} 歲.".format("王小明",18))
print ("{} 今年{} 歲.".format("王小明",18))
print ("{name} 今年{age} 歲.".format(name="王小明",age=18))
print('{0}'.format(5.5625))
print('{0:.2}'.format(5.5625))
print('{0:.1}'.format(5.5625))
print('{0:.3}'.format(5.5625))
print("{0:10}成績:{1:_^10}".format("Jennifer",95)) # ^位置區中
print("{0:10}成績:{1:>10}".format("Brian",87))     # <位置靠左
print("{0:10}成績:{1:*<10}".format("Jolin",100))   # >位置靠右
