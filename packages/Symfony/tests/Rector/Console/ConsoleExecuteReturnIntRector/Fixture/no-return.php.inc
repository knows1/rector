<?php

namespace Rector\Symfony\Tests\Rector\Console\ConsoleExecuteReturnIntRector\Fixture;

use Symfony\Component\Console\Command\Command;
use Symfony\Component\Console\Input\InputInterface;
use Symfony\Component\Console\Output\OutputInterface;

final class NoReturnCommand extends Command
{
    public function execute(InputInterface $input, OutputInterface $output)
    {
        $this->doSomething();
    }
}

?>
-----
<?php

namespace Rector\Symfony\Tests\Rector\Console\ConsoleExecuteReturnIntRector\Fixture;

use Symfony\Component\Console\Command\Command;
use Symfony\Component\Console\Input\InputInterface;
use Symfony\Component\Console\Output\OutputInterface;

final class NoReturnCommand extends Command
{
    public function execute(InputInterface $input, OutputInterface $output): int
    {
        $this->doSomething();
        return 0;
    }
}

?>
