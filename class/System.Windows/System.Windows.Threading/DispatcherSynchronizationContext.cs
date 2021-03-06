//
// DispatcherSynchronizationContext.cs
//
// Copyright 2008 Novell, Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#pragma warning disable 3001 // "Argument type of 'X' is not CLS-compliant" shown for the Dispatcher argument of the ctor

using System;
using System.Threading;

namespace System.Windows.Threading {

	public sealed class DispatcherSynchronizationContext : SynchronizationContext
	{
		Dispatcher dispatcher;

		public DispatcherSynchronizationContext (Dispatcher dispatcher)
		{
			if (dispatcher == null)
				throw new ArgumentNullException ("dispatcher");

			this.dispatcher = dispatcher;
		}

		public DispatcherSynchronizationContext () : this (Dispatcher.Main)
		{
		}

		public override void Send (SendOrPostCallback d, object state)
		{
			dispatcher.BeginInvoke (d, new object[] {state});
		}

		public override void Post (SendOrPostCallback d, object state)
		{
			dispatcher.Invoke (d, new object[] {state});
		}

		public override SynchronizationContext CreateCopy ()
		{
			return new DispatcherSynchronizationContext (dispatcher);
		}
	}
}