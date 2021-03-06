/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:04:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOHIDLib/IOHIDLib-Structs.h>
#import <IOHIDLib/IOHIDQueueClass.h>

@interface IOHIDObsoleteQueueClass : IOHIDQueueClass {

	IOHIDQueueInterface* _interface;
	/*function pointer*/void* _eventCallback;
	void* _eventCallbackTarget;
	void* _eventCallbackRefcon;

}
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
-(int)queryInterface:(SCD_Struct_IO0)arg1 outInterface:(void*)arg2 ;
-(int)getNextEvent:(IOHIDEventStruct*)arg1 ;
-(int)setEventCallout:(/*function pointer*/void*)arg1 callbackTarget:(void*)arg2 callbackRefcon:(void*)arg3 ;
@end

