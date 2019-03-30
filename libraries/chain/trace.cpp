/**
 *  @file
 *  @copyright defined in eos/LICENSE
 */
#include <eosio/chain/trace.hpp>

namespace eosio { namespace chain {

action_trace::action_trace(
   const transaction_trace& trace, const action& act, account_name receiver, bool context_free,
   int32_t action_ordinal, int32_t creator_action_ordinal, int32_t parent_action_ordinal
)
:action_ordinal( action_ordinal )
,creator_action_ordinal( creator_action_ordinal )
,parent_action_ordinal( parent_action_ordinal )
,receiver( receiver )
,act( act )
,context_free( context_free )
,trx_id( trace.id )
,block_num( trace.block_num )
,block_time( trace.block_time )
,producer_block_id( trace.producer_block_id )
{}

action_trace::action_trace(
   const transaction_trace& trace, action&& act, account_name receiver, bool context_free, 
   int32_t action_ordinal, int32_t creator_action_ordinal, int32_t parent_action_ordinal
)
:action_ordinal( action_ordinal )
,creator_action_ordinal( creator_action_ordinal )
,parent_action_ordinal( parent_action_ordinal )
,receiver( receiver )
,act( std::move(act) )
,context_free( context_free )
,trx_id( trace.id )
,block_num( trace.block_num )
,block_time( trace.block_time )
,producer_block_id( trace.producer_block_id )
{}

} } // eosio::chain
