
local function Play(tone, duration)
 local freq = t[tone]
 print ("Frequency:" .. freq)
 pwm.setup(BuzzerPin, freq, 512)
 pwm.start(BuzzerPin)
 tmr.delay(duration * 1000)  --delay in us
 pwm.stop(BuzzerPin)
 tmr.wdclr()
 tmr.delay(20000)  --delay in 20ms pause
 end  
 