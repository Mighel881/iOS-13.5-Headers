/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSKACReadArguments : NSObject {

	SEL _selector;
	id _target;
	void* _argument;
	id _argument2;

}

@property (nonatomic,readonly) SEL selector;                //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) id target;                   //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) void* argument;              //@synthesize argument=_argument - In the implementation block
@property (nonatomic,readonly) id argument2;                //@synthesize argument2=_argument2 - In the implementation block
-(void)dealloc;
-(SEL)selector;
-(id)target;
-(void*)argument;
-(id)initWithSelector:(SEL)arg1 target:(id)arg2 argument:(void*)arg3 ;
-(id)initWithSelector:(SEL)arg1 target:(id)arg2 argument:(void*)arg3 argument2:(id)arg4 ;
-(id)argument2;
@end

