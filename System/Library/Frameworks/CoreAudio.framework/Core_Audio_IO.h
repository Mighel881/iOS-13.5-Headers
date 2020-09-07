/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol Core_Audio_IO
@required
-(void)handle_io_message:(unsigned)arg1 with:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stop_before_io_device_change:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)start_after_io_device_change:(unsigned)arg1;

@end
