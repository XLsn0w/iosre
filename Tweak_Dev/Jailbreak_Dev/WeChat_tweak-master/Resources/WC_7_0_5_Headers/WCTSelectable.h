//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCTChainCall.h"

@interface WCTSelectable : WCTChainCall
{
    struct StatementSelect _statement;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)lazyPrepare;
- (id)limit:(const struct Expression *)arg1;
- (id)offset:(const struct Expression *)arg1;
- (id)orders:(const SyntaxList_64caf671 *)arg1;
- (struct StatementSelect *)statement;
- (id)where:(const struct Expression *)arg1;
- (void)willPrepare:(struct StatementSelect *)arg1;

@end

