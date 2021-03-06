/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_io;
@class OS_xpc_remote_channel, NSObject;

@interface OS_xpc_remote_pending_stream : NSObject {

	unsigned long long stream_id;
	OS_xpc_remote_channel* channel;
	NSObject*<OS_dispatch_io> io;
	int direction;
	/*^block*/id completion_handler;
	int error;
	OS_xpc_remote_pending_stream* link_stqe_next;

}
@end

